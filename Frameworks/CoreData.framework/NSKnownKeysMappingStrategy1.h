/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int  _cd_rc;
    id * _keys;
    unsigned long long  _length;
    id  _reserved1;
    int  _reserved64;
    void * _table;
}

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (Class)classForKeyedUnarchiver;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long long)arg2;
- (void)_coreDealloc:(bool)arg1;
- (bool)_isDeallocating;
- (struct __CFArray { }*)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long long)arg2;
- (bool)_tryRetain;
- (id)allKeys;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id*)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id*)keys;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
