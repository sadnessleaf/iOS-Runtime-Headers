/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLocale, NSString, NSObject<OS_dispatch_queue>;

@interface MKLocale : NSObject  {
    NSLocale *_locale;
    NSString *_identifier;
    int _guidanceUnit;
    int _distanceUnit;
    NSObject<OS_dispatch_queue> *_queue;
}

@property int guidanceUnit;
@property int distanceUnit;

+ (id)currentLocale;
+ (id)_localeOverridesForLocaleWithIdentifier:(id)arg1;

- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setDistanceUnit:(int)arg1;
- (int)distanceUnit;
- (void)setGuidanceUnit:(int)arg1;
- (int)guidanceUnit;
- (BOOL)useYardsForShortDistances;
- (BOOL)guidanceUsesMetricSystem;
- (BOOL)distanceUsesMetricSystem;
- (id)_nsLocaleAndIdentifier:(id*)arg1;
- (void)_nsLocaleDidChange:(id)arg1;

@end