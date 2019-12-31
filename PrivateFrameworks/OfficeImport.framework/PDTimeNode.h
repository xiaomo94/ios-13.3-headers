/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTimeNode : NSObject {
    NSDictionary * attributeMap;
    double  mAcceleration;
    int  mAnimationPresetClass;
    NSMutableArray * mChildTimeNodeList;
    double  mDeceleration;
    bool  mDisplay;
    double  mDuration;
    NSMutableArray * mEndTimeConditions;
    int  mFillType;
    NSString * mGroupId;
    bool  mHasAcceleration;
    bool  mHasDeceleration;
    bool  mHasDisplay;
    bool  mHasDuration;
    bool  mHasFillType;
    bool  mHasPresetId;
    bool  mHasPresetSubType;
    bool  mHasRepeatCount;
    bool  mHasRepeatDuration;
    bool  mHasSpeed;
    PDIterate * mIterate;
    int  mPresetId;
    int  mPresetSubType;
    int  mRepeatCount;
    int  mRepeatDuration;
    int  mRestartType;
    double  mSpeed;
    NSMutableArray * mStartTimeConditions;
    NSMutableArray * mSubTimeNodeList;
    int  mType;
}

@property (nonatomic, retain) NSDictionary *attributeMap;

- (void).cxx_destruct;
- (double)acceleration;
- (int)animationPresetClass;
- (id)attributeMap;
- (id)childTimeNodeList;
- (double)deceleration;
- (id)description;
- (bool)display;
- (double)duration;
- (id)endTimeConditions;
- (int)fillType;
- (id)groupId;
- (bool)hasAcceleration;
- (bool)hasDeceleration;
- (bool)hasDisplay;
- (bool)hasDuration;
- (bool)hasFillType;
- (bool)hasPresetClass;
- (bool)hasPresetId;
- (bool)hasPresetSubType;
- (bool)hasRepeatCount;
- (bool)hasRepeatDuration;
- (bool)hasRestartType;
- (bool)hasSpeed;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)iterate;
- (int)presetId;
- (int)presetSubType;
- (int)repeatCount;
- (int)repeatDuration;
- (int)restartType;
- (void)setAcceleration:(double)arg1;
- (void)setAnimationPresetClass:(int)arg1;
- (void)setAttributeMap:(id)arg1;
- (void)setChildTimeNodeList:(id)arg1;
- (void)setDeceleration:(double)arg1;
- (void)setDisplay:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndTimeConditions:(id)arg1;
- (void)setFillType:(int)arg1;
- (void)setGroupId:(id)arg1;
- (void)setGroupIdValue:(int)arg1;
- (void)setIterate:(id)arg1;
- (void)setPresetId:(int)arg1;
- (void)setPresetSubType:(int)arg1;
- (void)setRepeatCount:(int)arg1;
- (void)setRepeatDuration:(int)arg1;
- (void)setRestartType:(int)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStartTimeConditions:(id)arg1;
- (void)setSubTimeNodeList:(id)arg1;
- (void)setType:(int)arg1;
- (double)speed;
- (id)startTimeConditions;
- (id)subTimeNodeList;
- (int)type;
- (long long)writeDuration;
- (long long)writeRepeatCount;

@end
