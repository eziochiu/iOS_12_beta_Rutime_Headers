/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFCountingDataConsumer : MFNullDataConsumer {
    unsigned long long  _count;
}

@property (nonatomic, readonly) unsigned long long count;

- (long long)appendData:(id)arg1;
- (unsigned long long)count;

@end
