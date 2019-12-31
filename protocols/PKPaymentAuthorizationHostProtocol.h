/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationHostProtocol <NSObject>

@required

- (void)authorizationDidAuthorizeApplePayTrustSignature:(PKApplePayTrustSignature *)arg1;
- (void)authorizationDidAuthorizeDisbursement:(PKDisbursementVoucher *)arg1;
- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(PKAccountServicePaymentMethod *)arg1;
- (void)authorizationWillStart;

@optional

- (void)authorizationDidPresent;
- (void)connectionDidOpen;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;

@end