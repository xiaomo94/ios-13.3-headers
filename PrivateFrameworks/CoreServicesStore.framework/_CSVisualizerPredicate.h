/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
 */

@interface _CSVisualizerPredicate : NSPredicate {
    NSPredicate * _numericPredicate;
    unsigned long long  _operator;
    NSString * _searchString;
    NSString * _title;
}

+ (id)constantValueForExpression:(id)arg1;
+ (void)getRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 matchingPredicate:(id)arg2 inDescription:(id)arg3;
+ (bool)operatorIsNumeric:(unsigned long long)arg1;
+ (id)predicateWithFormatString:(id)arg1 error:(id*)arg2;
+ (id)translateNSPredicate:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (bool)evaluateNumerically:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (bool)getRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 inDescription:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 searchedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5;
- (id)initWithExpression:(id)arg1;
- (id)initWithSearchString:(id)arg1 forTitle:(id)arg2 operator:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithSearchString:(id)arg1 operator:(unsigned long long)arg2 error:(id*)arg3;
- (id)predicateFormat;

@end
