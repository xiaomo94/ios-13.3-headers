/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _companionSimLabelId;
    NSUUID * _companionSlotUuid;
    NSString * _iccid;
    bool  _isActiveDataPlan;
    bool  _isDefaultVoice;
    bool  _isSelectable;
    NSNumber * _isSelectedOverride;
    bool  _isSimStateValid;
    NSString * _label;
    long long  _lockState;
    NSString * _name;
    NSString * _phoneNumber;
    CTCellularPlan * _plan;
    bool  _shouldAppearDisabled;
    bool  _shouldAutoSelectWhenInRange;
    bool  _shouldDisplay;
    bool  _shouldDisplayType;
    long long  _type;
    CTUserLabel * _userLabel;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, copy) NSString *companionSimLabelId;
@property (nonatomic, copy) NSUUID *companionSlotUuid;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isActiveDataPlan;
@property (nonatomic, readonly) bool isBackedByCellularPlan;
@property (nonatomic) bool isDefaultVoice;
@property (nonatomic, readonly) bool isInstalling;
@property (nonatomic) bool isSelectable;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, retain) NSNumber *isSelectedOverride;
@property (nonatomic) bool isSimStateValid;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) long long lockState;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) CTCellularPlan *plan;
@property (nonatomic) bool shouldAppearDisabled;
@property (nonatomic) bool shouldAutoSelectWhenInRange;
@property (nonatomic, readonly) bool shouldDisplay;
@property (nonatomic) bool shouldDisplayType;
@property (nonatomic) long long type;
@property (nonatomic, retain) CTUserLabel *userLabel;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierName;
- (id)companionSimLabelId;
- (id)companionSlotUuid;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)identifier;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 iccid:(id)arg3 name:(id)arg4 type:(long long)arg5 phoneNumber:(id)arg6 label:(id)arg7;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 type:(long long)arg3 phoneNumber:(id)arg4 label:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 uuid:(id)arg2 name:(id)arg3 phoneNumber:(id)arg4 label:(id)arg5;
- (bool)isActiveDataPlan;
- (bool)isBackedByCellularPlan;
- (bool)isDefaultVoice;
- (bool)isInstalling;
- (bool)isSelectable;
- (bool)isSelected;
- (id)isSelectedOverride;
- (bool)isSimStateValid;
- (id)label;
- (long long)lockState;
- (id)name;
- (id)phoneNumber;
- (id)plan;
- (void)setCompanionSimLabelId:(id)arg1;
- (void)setCompanionSlotUuid:(id)arg1;
- (void)setIsActiveDataPlan:(bool)arg1;
- (void)setIsDefaultVoice:(bool)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setIsSelectedOverride:(id)arg1;
- (void)setIsSimStateValid:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLockState:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setShouldAppearDisabled:(bool)arg1;
- (void)setShouldAutoSelectWhenInRange:(bool)arg1;
- (void)setShouldDisplayType:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setUserLabel:(id)arg1;
- (bool)shouldAppearDisabled;
- (bool)shouldAutoSelectWhenInRange;
- (bool)shouldDisplay;
- (bool)shouldDisplayType;
- (long long)type;
- (id)typeAsString:(long long)arg1;
- (id)userLabel;
- (id)uuid;

@end
