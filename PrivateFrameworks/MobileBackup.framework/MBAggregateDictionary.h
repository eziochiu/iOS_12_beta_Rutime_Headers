/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBAggregateDictionary : NSObject {
    NSMutableDictionary * _scalars;
}

@property (nonatomic, readonly) NSDictionary *scalars;

+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)incrementScalarKey:(id)arg1;
+ (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;

- (void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)addCountAndSizeOfFile:(id)arg1;
- (void)addFileSize:(unsigned long long)arg1 containerID:(id)arg2 aggregateDictionaryGroup:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)save;
- (id)scalars;

@end
