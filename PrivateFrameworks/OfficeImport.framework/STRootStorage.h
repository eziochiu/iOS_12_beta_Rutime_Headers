/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STRootStorage : STStorage {
    NSMutableData * m_StorageData;
    struct _RootStorage { } * m_pCRoot;
    void * m_pvBuf;
}

- (void)dealloc;
- (id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int*)arg3;
- (id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int*)arg3 throwOnError:(bool)arg4;
- (int)getLongDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2;
- (short)getShortDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2;
- (id)getStringDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2;
- (id)initWithMutableData:(id)arg1 andMode:(int)arg2;
- (id)initWithName:(id)arg1 andMode:(int)arg2;
- (void*)resizeStorageBuffer:(unsigned long long)arg1;
- (void)setBlobDocumentPropertyWithId:(int)arg1 to:(void*)arg2 givenPropStream:(int)arg3;
- (void)setDefaultDocumentProperties;
- (void)setDocumentProperty:(int)arg1 withId:(int)arg2 AndType:(int)arg3 AndValue:(void*)arg4;
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2 givenPropStream:(int)arg3;
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2 givenPropStream:(int)arg3;
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2 givenPropStream:(int)arg3;

@end
