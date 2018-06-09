/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUPBClientManager : NSObject <AUPBInspecting, AUPBRegistrarListening> {
    struct vector<NewServerListener, std::__1::allocator<NewServerListener> > { 
        struct NewServerListener {} *__begin_; 
        struct NewServerListener {} *__end_; 
        struct __compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener> > { 
            struct NewServerListener {} *__value_; 
        } __end_cap_; 
    }  mNewServerListeners;
    int  mNotifyToken;
    struct vector<PropertyListener, std::__1::allocator<PropertyListener> > { 
        struct PropertyListener {} *__begin_; 
        struct PropertyListener {} *__end_; 
        struct __compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener> > { 
            struct PropertyListener {} *__value_; 
        } __end_cap_; 
    }  mPropertyListeners;
    <AUPBRegistrarHosting> * mProxyInterface;
    NSXPCConnection * mRegistrarConnection;
    NSMutableArray * mRemoteServers;
    unsigned int  mServerRefCounter;
    NSObject<OS_dispatch_queue> * mTouchServersQueue;
    bool  mValidToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addNewServerListener:(int (*)arg1 withUserData:(void*)arg2;
- (int)addPropertyListener:(int (*)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 property:(unsigned int)arg4 withUserData:(void*)arg5;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit { }*)arg1;
- (struct OpaqueRemoteAudioUnit { }*)auRefFromHandle:(unsigned int)arg1;
- (struct OpaqueAUPB { }*)aupbRefFromHandle:(unsigned int)arg1;
- (id)autorelease;
- (int)copyPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 intoValue:(const void**)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)getAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float*)arg6;
- (int)getAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void**)arg6 withSize:(unsigned int*)arg7;
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int*)arg6 writeable:(char *)arg7;
- (int)getSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id*)arg6;
- (void)handleRegistrarCrash;
- (id)init;
- (void)newServerAdded:(id)arg1;
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;
- (oneway void)release;
- (int)removePropertyListener:(int (*)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 property:(unsigned int)arg4 withUserData:(void*)arg5;
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer { }*)arg1;
- (int)removeServerListener:(int (*)arg1 withUserData:(void*)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (id)serverFromRef:(struct OpaqueAUPBServer { }*)arg1;
- (int)setAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;
- (int)setAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void*)arg6 size:(unsigned int)arg7;
- (int)setPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 value:(void*)arg4;
- (int)setSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 toData:(id)arg6;
- (void)startRegistarConnection;

@end
