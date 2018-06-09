/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyedXPCArchiver : HMFObject {
    NSKeyedArchiver * _archiver;
}

@property (nonatomic, retain) NSKeyedArchiver *archiver;

- (void).cxx_destruct;
- (void)_configure;
- (id)archiver;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (id)initForWritingWithMessage:(id)arg1;
- (void)setArchiver:(id)arg1;

@end
