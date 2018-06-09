/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonsModel : NSObject {
    VNPersonsModelConfiguration * _configuration;
    <VNPersonsModelDataSource> * _dataSource;
    VNPersonsModelFaceModel * _faceModel_DO_NOT_ACCESS_DIRECTLY;
    unsigned long long  _lastDataChangeSequenceNumber;
}

@property (nonatomic, readonly, copy) VNPersonsModelConfiguration *configuration;

+ (Class)_modelClassForKind:(unsigned int)arg1 error:(id*)arg2;
+ (id)_modelFromStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_modelFromUnopenedStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_modelInformationFromUnopenedStream:(id)arg1 error:(id*)arg2;
+ (id)_readModelObjectsFromStream:(id)arg1 options:(id)arg2 actionBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4 modelClass:(Class*)arg5 version:(unsigned long long*)arg6 error:(id*)arg7;
+ (id)configurationFromLoadedObjects:(id)arg1 error:(id*)arg2;
+ (id)informationForModelWithData:(id)arg1 error:(id*)arg2;
+ (id)informationForModelWithURL:(id)arg1 error:(id*)arg2;
+ (id)modelFromData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelFromStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3;
+ (bool)readObjectForVersion1Tag:(unsigned int)arg1 fromInputStream:(id)arg2 intoObjectDictionary:(id)arg3 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg4 error:(id*)arg5;
+ (id)supportedReadVersions;
+ (id)versionNumbersEncodedInClass:(Class)arg1 withMethodNamePrefix:(id)arg2 suffix:(id)arg3;

- (void).cxx_destruct;
- (id)configuration;
- (id)description;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)initWithConfiguration:(id)arg1 dataSource:(id)arg2;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (id)predictPersonFromFaceObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id*)arg4;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2;

@end
