/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebArchivePrivate : NSObject {
    WebResource * cachedMainResource;
    NSArray * cachedSubframeArchives;
    NSArray * cachedSubresources;
    struct RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { 
        struct LegacyWebArchive {} *m_ptr; 
    }  coreArchive;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct LegacyWebArchive { int (**x1)(); unsigned int x2; struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource {} *x_3_1_1; } x3; struct Vector<WTF::Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> >, 0, WTF::CrashOnOverflow, 16> { struct Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct Vector<WTF::Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> >, 0, WTF::CrashOnOverflow, 16> { struct Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> > {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; }*)coreArchive;
- (void)dealloc;
- (id)init;
- (id)initWithCoreArchive:(struct RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive {} *x1; }*)arg1;
- (void)setCoreArchive:(struct Ref<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive {} *x1; }*)arg1;

@end
