/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {
    _MRPlaybackSessionMigrateRequestProtobuf * _descriptor;
}

@property (nonatomic, retain) _MRContentItemProtobuf *contentItem;
@property (nonatomic, readonly) _MRPlaybackSessionMigrateRequestProtobuf *descriptor;
@property (nonatomic, readonly) double duration;
@property (nonatomic) long long endpointOptions;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double playbackRate;
@property (nonatomic, retain) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) long long playerOptions;
@property (nonatomic, readonly) NSString *report;
@property (nonatomic, retain) NSString *requestID;

- (void).cxx_destruct;
- (id)contentItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (double)duration;
- (void)endEvent:(id)arg1;
- (void)endEvent:(id)arg1 withError:(id)arg2;
- (long long)endpointOptions;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (void)merge:(id)arg1;
- (double)playbackPosition;
- (double)playbackRate;
- (id)playbackSessionRequest;
- (unsigned int)playbackState;
- (long long)playerOptions;
- (id)report;
- (id)requestID;
- (void)setContentItem:(id)arg1;
- (void)setEndpointOptions:(long long)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaybackSessionRequest:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlayerOptions:(long long)arg1;
- (void)setRequestID:(id)arg1;
- (void)startEvent:(id)arg1;

@end