/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSAlgorithmIdentifier : NSObject {
    MSOID * _algorithm;
    struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct heim_base_data {} *x2; } * _asn1AlgId;
    NSData * _parameters;
}

@property (readonly) MSOID *algorithm;
@property (readonly) struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct heim_base_data {} *x2; }*asn1AlgId;
@property (readonly) NSData *parameters;

+ (id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct heim_base_data {} *x2; }*)arg1 error:(id*)arg2;
+ (id)algorithmIdentifierWithOID:(id)arg1;
+ (id)digestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)algorithm;
- (struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct heim_base_data {} *x2; }*)asn1AlgId;
- (void)dealloc;
- (struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct heim_base_data {} *x2; }*)encode;
- (unsigned long long)hash;
- (id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id*)arg2;
- (id)initWithAsn1AlgId:(struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct heim_base_data {} *x2; }*)arg1 error:(id*)arg2;
- (id)initWithOID:(id)arg1;
- (id)initWithOID:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)signatureAlgorithmWithDigestAlgorithm:(id)arg1 error:(id*)arg2;

@end
