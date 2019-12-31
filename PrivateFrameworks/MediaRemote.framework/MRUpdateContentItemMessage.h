/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *contentItems;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (id)contentItems;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;
- (id)playerPath;
- (unsigned long long)priority;
- (unsigned long long)type;

@end
