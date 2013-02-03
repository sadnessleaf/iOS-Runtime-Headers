/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageView, <UIPDFSelectionWidget>;

@interface UIPDFSelectionController : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedPoint;
    BOOL _isTracking;
    UIPDFPageView *_pageView;
    BOOL _preceeds;
    BOOL _rangeMode;
    BOOL _resizingWidget;
    } _selectionFixedPoint;
    <UIPDFSelectionWidget> *_selectionWidget;
}

@property(readonly) struct CGPoint { float x; float y; } adjustedPoint;
@property(readonly) BOOL isTracking;
@property(readonly) BOOL isVisibleSelection;
@property UIPDFPageView * pageView;
@property(readonly) BOOL rangeMode;
@property(readonly) <UIPDFSelectionWidget> * selectionWidget;

- (struct CGPoint { float x1; float x2; })adjustedPoint;
- (void)clearSelection;
- (void)displaySelection;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)endTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)extendSelection:(struct CGPoint { float x1; float x2; })arg1;
- (void)extendSelectionToParagraph;
- (BOOL)isTracking;
- (BOOL)isVisibleSelection;
- (id)pageView;
- (BOOL)rangeMode;
- (id)selectionWidget;
- (void)setPageView:(id)arg1;
- (void)setSelectionFor:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldTrackAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1;

@end