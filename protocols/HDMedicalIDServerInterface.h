/* Generated by RuntimeBrowser.
 */

@protocol HDMedicalIDServerInterface <NSObject>

@required

- (void)remote_deleteMedicalIDDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchMedicalIDWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKMedicalIDData *, NSError *, void*
- (void)remote_medicalIDDataCreateIfNecessary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKMedicalIDData *, NSError *, void*
- (void)remote_medicalIDEmergencyContactsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_updateMedicalIDData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKMedicalIDData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end