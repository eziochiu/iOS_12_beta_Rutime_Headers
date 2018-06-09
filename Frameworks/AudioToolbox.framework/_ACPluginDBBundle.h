/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {
    struct AudioComponentVector { 
        struct shared_ptr<APComponent> {} *__begin_; 
        struct shared_ptr<APComponent> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { 
            struct shared_ptr<APComponent> {} *__value_; 
        } __end_cap_; 
        bool mSorted; 
    }  mBundleComponentVector;
    NSString * mFullPath;
    double  mInfoPlistModDate;
    double  mRsrcModDate;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3;
- (void)loadAllComponents:(struct AudioComponentVector { struct shared_ptr<APComponent> {} *x1; struct shared_ptr<APComponent> {} *x2; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> {} *x_3_1_1; } x3; bool x4; }*)arg1;
- (void)scanWithPriority:(int)arg1 loadable:(bool)arg2 infoPlistPath:(id)arg3;

@end
