/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject  {
    NSMutableDictionary *_sessions;
}

@property(readonly) NSArray * allSessionURLs;

+ (id)sessionManager;

- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)endSessionForURL:(id)arg1;
- (id)startSessionWithURL:(id)arg1;
- (id)audioPlayerForURL:(id)arg1;
- (id)allSessionURLs;
- (void)dealloc;
- (id)init;

@end