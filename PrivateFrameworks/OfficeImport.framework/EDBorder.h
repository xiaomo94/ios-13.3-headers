/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDBorder : NSObject {
    EDColorReference * mColorReference;
    int  mDiagonalType;
    EDResources * mResources;
    int  mType;
}

+ (id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 resources:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (id)colorReference;
- (id)description;
- (int)diagonalType;
- (unsigned long long)hash;
- (id)initWithResources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBorder:(id)arg1;
- (void)setDiagonalType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
