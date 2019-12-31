/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying> {
    NSMutableDictionary * _coldDataByYear;
    unsigned long long  _coldSpecifierCount;
    struct NSMutableSet { Class x1; } * _hotData;
}

@property (nonatomic, retain) NSMutableDictionary *coldDataByYear;
@property (nonatomic, readonly) unsigned long long coldSpecifierCount;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableSet *hotData;

+ (id)set;
+ (id)setWithSpecifier:(id)arg1;
+ (id)setWithSpecifiers:(id)arg1;

- (void).cxx_destruct;
- (id)allSpecifiers;
- (id)allSymbols;
- (id)coldDataByYear;
- (unsigned long long)coldSpecifierCount;
- (id)coldSpecifierSet;
- (id)coldSpecifiers;
- (bool)containsColdSpecifiers;
- (bool)containsSpecifier:(id)arg1;
- (bool)containsSpecifiersFromSet:(id)arg1;
- (bool)containsSpecifiersWithSymbol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateSpecifiersWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (struct NSMutableSet { Class x1; }*)hotData;
- (id)hotSpecifierSet;
- (id)hotSpecifiers;
- (id)init;
- (id)initWithSpecifiers:(id)arg1;
- (void)insertSpecifier:(id)arg1;
- (void)insertSpecifiersFromSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)p_description:(bool)arg1;
- (void)p_revalidateColdCount;
- (struct NSMutableSet { Class x1; }*)p_setForSpecifier:(id)arg1;
- (struct NSMutableSet { Class x1; }*)p_setForYear:(id)arg1;
- (void)removeAllSpecifiers;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifiersFromSet:(id)arg1;
- (id)setByIntersectingWithSet:(id)arg1;
- (id)setByIntersectingWithSymbolsOfSet:(id)arg1;
- (id)setByRemovingSpecifiersFromSet:(id)arg1;
- (id)setByRemovingSpecifiersWithSymbols:(id)arg1;
- (void)setColdDataByYear:(id)arg1;
- (void)setHotData:(struct NSMutableSet { Class x1; }*)arg1;
- (id)setOfSpecifiersContainedInSet:(id)arg1;
- (id)setOfSpecifiersNotContainedInSet:(id)arg1;
- (id)setOfSpecifiersPassingTest:(id /* block */)arg1;
- (id)setOfSpecifiersWithDate:(id)arg1;
- (id)setOfSpecifiersWithSymbol:(id)arg1;
- (id)shortDescription;
- (id)sortedArrayOfSpecifiers;
- (id)yearsReferenced;

@end
