/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoTimeProvider : NSObject <SVVideoTimeProviding> {
    AVPlayer * _player;
    <SVTimeConverting> * _timeConverter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayer *player;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) <SVTimeConverting> *timeConverter;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 timeConverter:(id)arg2;
- (id)player;
- (double)time;
- (id)timeConverter;

@end
