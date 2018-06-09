/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogEventStreamPosition : NSObject <NSSecureCoding> {
    unsigned long long  _ct;
    unsigned char  _source;
    unsigned char  _uuid;
}

@property (readonly) const char *UUID;
@property (readonly) unsigned long long continuousTime;
@property (readonly) const char *sourceUUID;

+ (bool)supportsSecureCoding;

- (const char *)UUID;
- (unsigned long long)continuousTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(const char *)arg1 bootUUID:(const char *)arg2 time:(unsigned long long)arg3;
- (const char *)sourceUUID;

@end
