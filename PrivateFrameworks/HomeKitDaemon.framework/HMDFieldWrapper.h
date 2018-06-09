/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFieldWrapper : HMFObject {
    NSString * _name;
    long long  _tlvid;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long tlvid;

- (void).cxx_destruct;
- (id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTlvid:(long long)arg1;
- (long long)tlvid;

@end
