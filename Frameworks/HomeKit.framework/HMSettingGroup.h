/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSettingGroup : NSObject <HFStateDumpBuildable, NSSecureCoding> {
    NSUUID * _identifier;
    NSMutableArray * _internalGroups;
    NSMutableArray * _internalSettings;
    NSString * _keyPath;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (retain) NSMutableArray *internalGroups;
@property (retain) NSMutableArray *internalSettings;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groups;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4;
- (id)internalGroups;
- (id)internalSettings;
- (id)keyPath;
- (id)localizedTitle;
- (void)merge:(id)arg1;
- (id)name;
- (void)setInternalGroups:(id)arg1;
- (void)setInternalSettings:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (id)settings;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
