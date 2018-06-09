/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {
    NSMutableDictionary * mBundlesByName;
    NSData * mCarbonComponentHash;
    bool  mComponentsLoadable;
    double  mCurrentModificationDate;
    _ACPluginDB * mDB;
    struct __FSEventStream { } * mFSMonitor;
    NSString * mFullPath;
    double  mModificationDate;
    int  mPriority;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)eventStreamCallback:(id)arg1 flags:(const unsigned int*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 priority:(int)arg2;
- (void)loadAllComponents:(struct AudioComponentVector { struct shared_ptr<APComponent> {} *x1; struct shared_ptr<APComponent> {} *x2; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> {} *x_3_1_1; } x3; bool x4; }*)arg1;
- (void)monitorDirectory;
- (bool)refreshModificationDate;
- (id)scanBundle:(id)arg1 loadable:(bool)arg2;
- (void)scanDirectory;

@end
