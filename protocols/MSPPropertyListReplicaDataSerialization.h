/* Generated by RuntimeBrowser.
 */

@protocol MSPPropertyListReplicaDataSerialization <NSObject>

@required

- (NSData *)propertyListDataRepresentation;
- (id)replicaByMergingWithReplica:(MSPReplica *)arg1 mergeOptions:(id <MSPReplicaMergeOptions>)arg2 userVisibleEffectiveContentsChanged:(out bool*)arg3;

@end
