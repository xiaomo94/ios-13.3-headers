/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerAnonymousActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol> {
    HFMutableSetDiff * _actionBuilders;
    unsigned long long  _actionSetType;
    NSArray * _actions;
    HMTrigger * _containingTrigger;
}

@property (nonatomic, retain) HFMutableSetDiff *actionBuilders;
@property (nonatomic, retain) HMActionSet *actionSet;
@property (nonatomic) unsigned long long actionSetType;
@property (nonatomic, readonly) NSArray *actions;
@property (getter=isAffectedByEndEvents, nonatomic, readonly) bool affectedByEndEvents;
@property (nonatomic, retain) HMTrigger *containingTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaAction;
@property (nonatomic, readonly) bool requiresDeviceUnlock;
@property (readonly) Class superclass;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_existingActionBuilder:(id)arg1 inSet:(id)arg2;
- (id)_lazilyUpdateActions;
- (id)actionBuilders;
- (id)actionSet;
- (unsigned long long)actionSetType;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 actionSetType:(unsigned long long)arg2;
- (id)commitItem;
- (id)containingTrigger;
- (id)getOrCreateActionSet;
- (bool)hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isAffectedByEndEvents;
- (id)mediaAction;
- (void)removeAction:(id)arg1;
- (void)removeAllActions;
- (bool)requiresDeviceUnlock;
- (void)setActionBuilders:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)setActionSetType:(unsigned long long)arg1;
- (void)setContainingTrigger:(id)arg1;
- (void)updateAction:(id)arg1;
- (void)updateActionBuildersDiff:(id)arg1;

@end
