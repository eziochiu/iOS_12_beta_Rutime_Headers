/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyObjectMap : NSObject {
    NSMapTable * _archivedObjects;
    NSMapTable * _deepCopyIdentifierToOriginalObject;
    NSMapTable * _originalIdentifierToDeepCopyObject;
}

- (void).cxx_destruct;
- (id)deepCopyForObject:(id)arg1;
- (void)didReadObjects:(id)arg1;
- (void)didWriteObjects:(id)arg1;
- (id)objectForDeepCopy:(id)arg1;

@end
