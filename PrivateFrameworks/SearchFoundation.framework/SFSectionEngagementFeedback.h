/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying> {
    SFResultSection * _section;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, copy) SFResultSection *section;
@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (id)section;
- (void)setSection:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
