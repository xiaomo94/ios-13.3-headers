/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKConceptRelationship : NSObject <NSCopying, NSObject, NSSecureCoding> {
    HKConcept * _destination;
    long long  _identifier;
    NSString * _name;
    HKConcept * _owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HKConcept *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) HKConcept *owner;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 owner:(id)arg2 name:(id)arg3 destination:(id)arg4;
- (id)initWithOwner:(id)arg1 name:(id)arg2 destination:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)owner;
- (void)setOwner:(id)arg1;

@end
