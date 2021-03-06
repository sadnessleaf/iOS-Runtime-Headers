/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    BOOL mIsFillToRectOverridden;
    BOOL mIsTypeOverridden;
    int mType;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fillToRect;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;
- (void)setFillToRect:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
