/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTrigger : NSObject <HFStateDumpBuildable, HFTriggerProtocol, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    _HMContext * _context;
    HMMutableArray * _currentActionSets;
    bool  _enabled;
    HMHome * _home;
    NSDate * _lastFireDate;
    HMFUnfairLock * _lock;
    NSString * _name;
    HMUser * _owner;
    HMDevice * _ownerDevice;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (nonatomic, readonly) _HMContext *context;
@property (nonatomic, readonly) HMUser *creator;
@property (nonatomic, readonly) HMDevice *creatorDevice;
@property (nonatomic, retain) HMMutableArray *currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isShortcutOwned;
@property (nonatomic, readonly) bool hf_requiresConfirmationToRun;
@property (nonatomic) HMHome *home;
@property (nonatomic, copy) NSDate *lastFireDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) HMUser *owner;
@property (nonatomic, retain) HMDevice *ownerDevice;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addActionSetOfType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleTriggerActivatedNotification:(id)arg1;
- (void)_handleTriggerFired:(id)arg1;
- (void)_handleTriggerFiredNotification:(id)arg1;
- (void)_handleTriggerRenamedNotification:(id)arg1;
- (void)_handleUpdatedActionSetNotification:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_updateActionSet:(id)arg1 add:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionSets;
- (void)addActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetOfType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetWithCompletionHandler:(id /* block */)arg1;
- (bool)compatibleWithApp;
- (id)context;
- (id)creator;
- (id)creatorDevice;
- (id)currentActionSets;
- (void)dealloc;
- (void)enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEnabled;
- (id)lastFireDate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (id)owner;
- (id)ownerDevice;
- (void)removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCurrentActionSets:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastFireDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setOwnerDevice:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;

- (id)hf_forceDisableReasons;
- (bool)hf_isShortcutOwned;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (bool)hf_requiresConfirmationToRun;
- (bool)hf_shouldDisplayTrigger;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (unsigned long long)hf_triggerType;

@end
