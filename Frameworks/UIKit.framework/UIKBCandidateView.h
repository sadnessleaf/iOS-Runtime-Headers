/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardCandidateListDelegate>, NSArray, NSMutableArray, UIColor, UIImage, UIKeyboardCandidate, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl, UIView;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList, UIKeyboardCandidateScrollViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIView *_clippingView;
    unsigned int _selectedSortIndex;
    UIView *_topBorder;
    UIKeyboardCandidate *dictationCandidate;
    NSMutableArray *m_buttons;
    int m_candidateCount;
    NSArray *m_candidates;
    int m_candidatesPerColumn;
    int m_candidatesPerPage;
    int m_columns;
    int m_current;
    <UIKeyboardCandidateListDelegate> *m_delegate;
    UIKeyboardCandidate *m_dictationCandidate;
    int m_firstComposition;
    int m_firstShown;
    BOOL m_handwritingDictationEnabled_iPhone;
    UIColor *m_highlightColor;
    UIImage *m_highlightImage;
    BOOL m_respondsToAccept;
    BOOL m_respondsToSelect;
    UIKeyboardCandidateScrollViewController *m_scrollViewController;
    UIKeyboardCandidateSortControl *m_scrollViewSortControl;
    } m_symbolRect;
    UIColor *m_textColor;
}

@property(retain) UIKeyboardCandidate * dictationCandidate;
@property(retain) UIColor * highlightColor;
@property(retain) UIKeyboardCandidateScrollViewController * scrollViewController;
@property(retain) UIKeyboardCandidateSortControl * scrollViewSortControl;
@property unsigned int selectedSortIndex;

- (id).cxx_construct;
- (void)addSubview:(id)arg1;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (id)candidateList;
- (void)clearButtons;
- (void)clearScrollViewController;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (id)dictationCandidate;
- (id)groupedCandidatesForUnsortedCandidates:(id)arg1;
- (id)groupedCandidatesFromCandidates:(id)arg1 forSortIndex:(unsigned int)arg2;
- (id)highlightColor;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)indexTitlesForGroupTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (void)jumpToCompositions;
- (void)layout;
- (void)nextCandidatesAction;
- (void)refreshForDictationAvailablityDidChange;
- (id)scrollViewController;
- (id)scrollViewSortControl;
- (void)selectCandidate:(id)arg1;
- (unsigned int)selectedSortIndex;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setDictationCandidate:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setScrollViewController:(id)arg1;
- (void)setScrollViewSortControl:(id)arg1;
- (void)setSelectedSortIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)sortSelectionBarAction:(id)arg1;
- (id)sortingMethodTitles;
- (void)updateAppearanceForDictationButton:(id)arg1;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;
- (void)updateScrollViewController;
- (void)updateScrollViewControllerWithVisualStyle:(int)arg1;

@end
