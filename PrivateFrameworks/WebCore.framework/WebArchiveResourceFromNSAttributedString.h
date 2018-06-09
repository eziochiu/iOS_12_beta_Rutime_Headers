/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebArchiveResourceFromNSAttributedString : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { 
        struct ArchiveResource {} *m_ptr; 
    }  resource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;

@end
