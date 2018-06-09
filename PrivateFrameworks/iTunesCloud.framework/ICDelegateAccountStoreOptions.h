/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _databasePath;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSString * _serviceName;
    bool  _singleWriter;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *XPCEndpoint;
@property (nonatomic, copy) NSString *XPCServiceName;
@property (nonatomic, copy) NSString *databasePath;
@property (getter=isSingleWriter, nonatomic) bool singleWriter;

+ (id)defaultOptionsWithServiceEndpoint:(id)arg1;
+ (id)defaultOptionsWithServiceName:(id)arg1;
+ (id)singleWriterOptionsWithDatabasePath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)XPCEndpoint;
- (id)XPCServiceName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databasePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSingleWriter;
- (void)setDatabasePath:(id)arg1;
- (void)setSingleWriter:(bool)arg1;
- (void)setXPCEndpoint:(id)arg1;
- (void)setXPCServiceName:(id)arg1;

@end
