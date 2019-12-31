/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTodayPluginFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {
    long long  _bridgedGroupType;
}

@property (nonatomic, readonly) long long bridgedGroupType;

- (void)_performOperation;
- (long long)bridgedGroupType;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 bridgedGroupType:(long long)arg5;
- (void)performOperation;
- (bool)validateOperation;

@end
