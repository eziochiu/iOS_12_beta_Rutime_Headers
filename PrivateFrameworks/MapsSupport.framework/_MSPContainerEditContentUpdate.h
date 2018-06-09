/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate> {
    <MSPImmutableObject> * _updatedImmutableObject;
    <MSPMutableObject> * _updatedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MSPImmutableObject> *updatedImmutableObject;
@property (nonatomic, readonly) <MSPMutableObject> *updatedObject;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUpdatedImmutableObject:(id)arg1;
- (id)initWithUpdatedObject:(id)arg1;
- (id)updatedImmutableObject;
- (id)updatedObject;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;

@end
