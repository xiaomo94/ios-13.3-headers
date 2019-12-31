/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSSyncSettingsProvider : NSObject {
    NPSDomainAccessor * _accessor;
    <DNDSSyncSettingsProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    DNDSSyncSettings * _syncSettings;
}

@property (nonatomic) <DNDSSyncSettingsProviderDelegate> *delegate;
@property (copy) DNDSSyncSettings *syncSettings;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (void)_queue_updateSyncPreferences;
- (void)_updateSyncPreferences;
- (void)dealloc;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSyncSettings:(id)arg1;
- (id)syncSettings;

@end
