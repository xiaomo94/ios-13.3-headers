/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVPlaylist : NSObject {
    long long  _endAction;
    NSArray * _mediaItems;
    long long  _repeatMode;
    NSDictionary * _userInfo;
}

@property (nonatomic) long long endAction;
@property (nonatomic, readonly, copy) NSArray *mediaItems;
@property (nonatomic) long long repeatMode;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (long long)endAction;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)mediaItems;
- (void)removeObjectsAtIndexes:(id)arg1;
- (long long)repeatMode;
- (void)setEndAction:(long long)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
