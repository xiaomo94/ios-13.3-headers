/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSSearchSpecification : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _behaviors;
    NSArray * _classLocationIDs;
    NSArray * _classSortDescriptors;
    unsigned long long  _compareOptions;
    bool  _includeUnsearchablePersons;
    NSArray * _locationPersonIDs;
    NSArray * _locationSortDescriptors;
    unsigned long long  _options;
    NSArray * _personLocationIDs;
    NSArray * _personSortDescriptors;
    NSArray * _prohibitedLocationPersonIDs;
    NSString * _prohibitedLocationPrivilege;
    NSString * _prohibitedPrivilege;
    NSArray * _prohibitedPrivilegeLocationIDs;
    NSArray * _requiredClassMemberClassIDs;
    unsigned long long  _requiredClassMemberRole;
    NSArray * _requiredLocationPersonIDs;
    NSString * _requiredLocationPrivilege;
    long long  _requiredLocationRoleType;
    NSString * _requiredPrivilege;
    NSArray * _requiredPrivilegeLocationIDs;
    NSString * _requiredRoleID;
    long long  _requiredRoleType;
    NSString * _searchString;
    NSArray * _searchTokens;
}

@property (nonatomic) unsigned long long behaviors;
@property (readonly, copy) NSArray *classLocationIDs;
@property (nonatomic, copy) NSArray *classLocationIDs;
@property (copy) NSArray *classSortDescriptors;
@property (nonatomic) unsigned long long compareOptions;
@property bool includeUnsearchablePersons;
@property (readonly, copy) NSArray *locationPersonIDs;
@property (copy) NSArray *locationPersonIDs;
@property (copy) NSArray *locationSortDescriptors;
@property (nonatomic) unsigned long long options;
@property (readonly, copy) NSArray *personLocationIDs;
@property (copy) NSArray *personLocationIDs;
@property (copy) NSArray *personSortDescriptors;
@property (readonly, copy) NSArray *prohibitedLocationPersonIDs;
@property (copy) NSArray *prohibitedLocationPersonIDs;
@property (readonly, copy) NSString *prohibitedLocationPrivilege;
@property (copy) NSString *prohibitedLocationPrivilege;
@property (readonly, copy) NSString *prohibitedPrivilege;
@property (copy) NSString *prohibitedPrivilege;
@property (readonly, copy) NSArray *prohibitedPrivilegeLocationIDs;
@property (copy) NSArray *prohibitedPrivilegeLocationIDs;
@property (readonly, copy) NSArray *requiredClassMemberClassIDs;
@property (copy) NSArray *requiredClassMemberClassIDs;
@property (readonly) unsigned long long requiredClassMemberRole;
@property unsigned long long requiredClassMemberRole;
@property (readonly, copy) NSArray *requiredLocationPersonIDs;
@property (copy) NSArray *requiredLocationPersonIDs;
@property (readonly, copy) NSString *requiredLocationPrivilege;
@property (copy) NSString *requiredLocationPrivilege;
@property (readonly) long long requiredLocationRoleType;
@property long long requiredLocationRoleType;
@property (readonly, copy) NSString *requiredPrivilege;
@property (copy) NSString *requiredPrivilege;
@property (readonly, copy) NSArray *requiredPrivilegeLocationIDs;
@property (copy) NSArray *requiredPrivilegeLocationIDs;
@property (readonly, copy) NSString *requiredRoleID;
@property (copy) NSString *requiredRoleID;
@property (readonly) long long requiredRoleType;
@property long long requiredRoleType;
@property (copy) NSString *searchString;
@property (nonatomic, copy) NSArray *searchTokens;

+ (id)newlineAnchoredPredicateValueForToken:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)behaviors;
- (bool)canUseClassPredicate;
- (bool)canUsePersonPredicate;
- (id)classLocationIDs;
- (id)classSortDescriptors;
- (unsigned long long)compareOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocationConstraints;
- (bool)hasPersonConstraints;
- (bool)includeUnsearchablePersons;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 behaviors:(unsigned long long)arg2;
- (id)initWithOptions:(unsigned long long)arg1 behaviors:(unsigned long long)arg2 searchString:(id)arg3;
- (bool)isClassMemberSearch;
- (bool)isClassSearch;
- (bool)isLocationSearch;
- (bool)isPersonSearch;
- (id)locationPersonIDs;
- (id)locationSortDescriptors;
- (unsigned long long)options;
- (id)personLocationIDs;
- (id)personSortDescriptors;
- (id)predicate;
- (id)predicateForClasses;
- (id)predicateForPersons;
- (id)predicateForPersonsWithObjectIDs:(id)arg1;
- (id)predicateForPersonsWithPersonIDs:(id)arg1;
- (id)predicateUsingSubPredicateBlock:(id /* block */)arg1;
- (id)predicateWithLocationIDs:(id)arg1;
- (void)prohibitPrivilege:(id)arg1 atLocationIDs:(id)arg2;
- (void)prohibitPrivilege:(id)arg1 onPersonIDs:(id)arg2;
- (id)prohibitedLocationPersonIDs;
- (id)prohibitedLocationPrivilege;
- (id)prohibitedPrivilege;
- (id)prohibitedPrivilegeLocationIDs;
- (void)requireClassMemberRole:(unsigned long long)arg1 forClassIDs:(id)arg2;
- (void)requirePrivilege:(id)arg1 atLocationIDs:(id)arg2;
- (void)requirePrivilege:(id)arg1 onPersonIDs:(id)arg2;
- (void)requireRole:(id)arg1 atLocationIDs:(id)arg2;
- (void)requireRoleType:(long long)arg1 atLocationIDs:(id)arg2;
- (void)requireRoleType:(long long)arg1 onPersonIDs:(id)arg2;
- (id)requiredClassMemberClassIDs;
- (unsigned long long)requiredClassMemberRole;
- (id)requiredLocationPersonIDs;
- (id)requiredLocationPrivilege;
- (long long)requiredLocationRoleType;
- (id)requiredPrivilege;
- (id)requiredPrivilegeLocationIDs;
- (id)requiredRoleID;
- (long long)requiredRoleType;
- (bool)requiresDashboardEntitlement;
- (void)restrictToClassesAtLocationIDs:(id)arg1;
- (id)searchString;
- (id)searchTokens;
- (void)setBehaviors:(unsigned long long)arg1;
- (void)setClassLocationIDs:(id)arg1;
- (void)setClassSortDescriptors:(id)arg1;
- (void)setCompareOptions:(unsigned long long)arg1;
- (void)setIncludeUnsearchablePersons:(bool)arg1;
- (void)setLocationPersonIDs:(id)arg1;
- (void)setLocationSortDescriptors:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPersonLocationIDs:(id)arg1;
- (void)setPersonSortDescriptors:(id)arg1;
- (void)setProhibitedLocationPersonIDs:(id)arg1;
- (void)setProhibitedLocationPrivilege:(id)arg1;
- (void)setProhibitedPrivilege:(id)arg1;
- (void)setProhibitedPrivilegeLocationIDs:(id)arg1;
- (void)setRequiredClassMemberClassIDs:(id)arg1;
- (void)setRequiredClassMemberRole:(unsigned long long)arg1;
- (void)setRequiredLocationPersonIDs:(id)arg1;
- (void)setRequiredLocationPrivilege:(id)arg1;
- (void)setRequiredLocationRoleType:(long long)arg1;
- (void)setRequiredPrivilege:(id)arg1;
- (void)setRequiredPrivilegeLocationIDs:(id)arg1;
- (void)setRequiredRoleID:(id)arg1;
- (void)setRequiredRoleType:(long long)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchTokens:(id)arg1;

@end
