/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {
    NSDecimalNumber * _feePercentage;
    NSDecimalNumber * _maximumFee;
    NSDecimalNumber * _minimumFee;
}

@property (nonatomic, copy) NSDecimalNumber *feePercentage;
@property (nonatomic, copy) NSDecimalNumber *maximumFee;
@property (nonatomic, copy) NSDecimalNumber *minimumFee;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)feePercentage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1;
- (id)maximumFee;
- (id)minimumFee;
- (void)setFeePercentage:(id)arg1;
- (void)setMaximumFee:(id)arg1;
- (void)setMinimumFee:(id)arg1;

@end
