/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface _ACPluginDB : NSObject <NSSecureCoding> {
    NSData * mCarbonComponentHash;
    bool  mDirty;
    NSObject<OS_dispatch_queue> * mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)>="__buf_"{type="__lx"[24C] {}  mNotificationCallback;
    struct function<void ()>="__buf_"{type="__lx"[24C] {}  mScanHashCallback;
    NSMutableDictionary * mSearchDirectories;
}

+ (id)path;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(struct AudioComponentVector { struct shared_ptr<APComponent> {} *x1; struct shared_ptr<APComponent> {} *x2; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> {} *x_3_1_1; } x3; bool x4; }*)arg3;
- (struct AudioComponentVector { struct shared_ptr<APComponent> {} *x1; struct shared_ptr<APComponent> {} *x2; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> {} *x_3_1_1; } x3; bool x4; })postInit:(bool)arg1;
- (void)writeIfDirty;

@end
