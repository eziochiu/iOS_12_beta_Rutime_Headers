/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportMetadata : TSPObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _acknowledgedServerData;
    NSSet * _acknowledgedServerDataForArchiving;
    bool  _isInCollaborationModeForArchiving;
}

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithContext:(id)arg1;
- (bool)isDataAcknowledgedByServer:(id)arg1;
- (void)isDataAcknowledgedByServer:(id)arg1 completion:(id /* block */)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)resetAcknowledgedServerData;
- (void)saveToArchiver:(id)arg1;
- (void)setData:(id)arg1 acknowledgedByServer:(bool)arg2;
- (void)takeSnapshotWithCollaborationMode:(bool)arg1;
- (long long)tsp_identifier;

@end
