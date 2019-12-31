/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommand : NSObject {
    <MPRemoteCommandDelegate_Internal> * _commandCenterDelegate;
    <MPRemoteCommandDelegate_Private> * _delegate;
    bool  _enabled;
    NSMutableDictionary * _handlers;
    unsigned int  _mediaRemoteCommandType;
    bool  _observing;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <MPRemoteCommandDelegate_Internal> *commandCenterDelegate;
@property (nonatomic) <MPRemoteCommandDelegate_Private> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasTargets;
@property (nonatomic, readonly) unsigned int mediaRemoteCommandType;
@property (getter=isObserving, nonatomic) bool observing;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (getter=isSupportedAndEnabled, nonatomic, readonly) bool supportedAndEnabled;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)addTargetWithHandler:(id /* block */)arg1;
- (id)commandCenterDelegate;
- (struct _MRMediaRemoteCommandInfo { }*)createCommandInfoRepresentation;
- (id)delegate;
- (id)description;
- (bool)hasTargets;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)invokeCommandWithEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)isEnabled;
- (bool)isEnabledForContentItemIdentifier:(id)arg1;
- (bool)isObserving;
- (bool)isSupported;
- (bool)isSupportedAndEnabled;
- (bool)isSupportedForContentItemIdentifier:(id)arg1;
- (unsigned int)mediaRemoteCommandType;
- (id)newCommandEvent;
- (id)newCommandEventWithCommandType:(unsigned int)arg1 options:(id)arg2;
- (id)newCommandEventWithContentItemIdentifier:(id)arg1;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)arg1;
- (id)newSeekCommandEventWithType:(unsigned long long)arg1;
- (void)notifyPropagatablePropertyChanged;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setCommandCenterDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setObserving:(bool)arg1;

@end
