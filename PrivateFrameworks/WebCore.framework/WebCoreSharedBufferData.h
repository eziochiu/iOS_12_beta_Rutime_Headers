/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment> > { 
        struct DataSegment {} *m_ptr; 
    }  sharedBufferDataSegment;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithSharedBufferDataSegment:(const struct DataSegment { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct Variant<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16>, WTF::RetainPtr<const __CFData *>, WebCore::FileSystem::MappedFileData> { union __variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16>, WTF::RetainPtr<const __CFData *>, WebCore::FileSystem::MappedFileData> { union __variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16> > { struct __storage_wrapper<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16> > { struct type { unsigned char x_1_5_1[16]; } x_1_4_1; } x_1_3_1; struct __dummy_type { } x_1_3_2; } x_1_2_1; union __variant_data<WTF::RetainPtr<const __CFData *>, WebCore::FileSystem::MappedFileData> { union __variant_data<WTF::RetainPtr<const __CFData *> > { struct __storage_wrapper<WTF::RetainPtr<const __CFData *> > { struct type { unsigned char x_1_6_1[8]; } x_1_5_1; } x_1_4_1; struct __dummy_type { } x_1_4_2; } x_2_3_1; union __variant_data<WebCore::FileSystem::MappedFileData> { struct __storage_wrapper<WebCore::FileSystem::MappedFileData> { struct type { unsigned char x_1_6_1[16]; } x_1_5_1; } x_2_4_1; struct __dummy_type { } x_2_4_2; } x_2_3_2; } x_1_2_2; } x_2_1_1; BOOL x_2_1_2; } x2; }*)arg1;
- (unsigned long long)length;

@end
