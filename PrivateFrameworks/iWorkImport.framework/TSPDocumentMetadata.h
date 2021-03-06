/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentMetadata : TSPObject {
    bool  _isInCollaborationModeForArchiving;
}

- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(bool)arg1;
- (long long)tsp_identifier;

@end
