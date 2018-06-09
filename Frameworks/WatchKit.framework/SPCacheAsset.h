/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPCacheAsset : NSObject {
    double  _accessDate;
    NSString * _key;
    unsigned long long  _size;
    unsigned long long  _state;
}

@property (nonatomic) double accessDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long state;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;

- (void).cxx_destruct;
- (double)accessDate;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4;
- (id)key;
- (void)setAccessDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)state;

@end
