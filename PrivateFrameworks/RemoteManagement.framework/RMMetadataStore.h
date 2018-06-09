/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMMetadataStore : NSObject {
    NSMutableDictionary * __kvStore;
    NSString * _metadataFilePath;
}

@property (nonatomic, retain) NSMutableDictionary *_kvStore;
@property (nonatomic, copy) NSString *metadataFilePath;

+ (void)clear;
+ (id)dataValueForKey:(id)arg1;
+ (id)dateValueForKey:(id)arg1;
+ (id)dictValueForKey:(id)arg1;
+ (void)refresh;
+ (void)removeValueForKey:(id)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)sharedStore;
+ (id)stringValueForKey:(id)arg1;

- (void).cxx_destruct;
- (id)_kvStore;
- (id)metadataFilePath;
- (bool)readMetadataWithError:(id*)arg1;
- (void)setMetadataFilePath:(id)arg1;
- (void)set_kvStore:(id)arg1;
- (bool)writeMetadataWithError:(id*)arg1;

@end
