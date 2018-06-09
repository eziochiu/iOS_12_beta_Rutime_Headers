/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKMetric : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesUploaded;
    unsigned long long  _connections;
    unsigned long long  _connectionsCreated;
    double  _duration;
    double  _executing;
    double  _queueing;
    NSDate * _startDate;
}

@property unsigned long long bytesDownloaded;
@property unsigned long long bytesUploaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property double duration;
@property double executing;
@property double queueing;
@property (nonatomic, retain) NSDate *startDate;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesUploaded;
- (unsigned long long)connections;
- (unsigned long long)connectionsCreated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)executing;
- (id)initWithCoder:(id)arg1;
- (double)queueing;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesUploaded:(unsigned long long)arg1;
- (void)setConnections:(unsigned long long)arg1;
- (void)setConnectionsCreated:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setExecuting:(double)arg1;
- (void)setQueueing:(double)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)unionMetric:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)initWithMMCSOperationMetric:(id)arg1;

@end
