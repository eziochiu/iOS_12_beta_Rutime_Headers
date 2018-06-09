/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVAOLoader : TSCH3DResourceLoader

- (/* Warning: unhandled struct encoding: '{VAOLoadResult=BB@}' */ struct VAOLoadResult { bool x1; bool x2; id x3; })activateObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_1_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_2; } x_3_2_1[8]; } x_1_1_3; } x1; }*)arg1 indices:(id)arg2 insideSession:(id)arg3;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;

@end
