/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFuzzyLocationPersister : NSObject {
    NSString * _path;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)readDictionaryError:(id*)arg1;
- (bool)removeDictionaryError:(id*)arg1;
- (void)removeIfLocationServicesDisabledForMaps;
- (bool)writeDictionary:(id)arg1 error:(id*)arg2;

@end
