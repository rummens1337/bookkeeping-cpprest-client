/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Attachment.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Attachment::Attachment()
{
    m_CreatedAt = 0L;
    m_CreatedAtIsSet = false;
    m_Encoding = utility::conversions::to_string_t("");
    m_EncodingIsSet = false;
    m_FileName = utility::conversions::to_string_t("");
    m_FileNameIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_LogId = 0L;
    m_LogIdIsSet = false;
    m_MimeType = utility::conversions::to_string_t("");
    m_MimeTypeIsSet = false;
    m_OriginalName = utility::conversions::to_string_t("");
    m_OriginalNameIsSet = false;
    m_Path = utility::conversions::to_string_t("");
    m_PathIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_UpdatedAt = 0L;
    m_UpdatedAtIsSet = false;
}

Attachment::~Attachment()
{
}

void Attachment::validate()
{
    // TODO: implement validation
}

web::json::value Attachment::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_EncodingIsSet)
    {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(m_Encoding);
    }
    if(m_FileNameIsSet)
    {
        val[utility::conversions::to_string_t("fileName")] = ModelBase::toJson(m_FileName);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LogIdIsSet)
    {
        val[utility::conversions::to_string_t("logId")] = ModelBase::toJson(m_LogId);
    }
    if(m_MimeTypeIsSet)
    {
        val[utility::conversions::to_string_t("mimeType")] = ModelBase::toJson(m_MimeType);
    }
    if(m_OriginalNameIsSet)
    {
        val[utility::conversions::to_string_t("originalName")] = ModelBase::toJson(m_OriginalName);
    }
    if(m_PathIsSet)
    {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(m_Path);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_UpdatedAtIsSet)
    {
        val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);
    }

    return val;
}

bool Attachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_encoding;
            ok &= ModelBase::fromJson(fieldValue, refVal_encoding);
            setEncoding(refVal_encoding);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fileName;
            ok &= ModelBase::fromJson(fieldValue, refVal_fileName);
            setFileName(refVal_fileName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logId"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_logId;
            ok &= ModelBase::fromJson(fieldValue, refVal_logId);
            setLogId(refVal_logId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mimeType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mimeType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_mimeType;
            ok &= ModelBase::fromJson(fieldValue, refVal_mimeType);
            setMimeType(refVal_mimeType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("originalName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("originalName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_originalName;
            ok &= ModelBase::fromJson(fieldValue, refVal_originalName);
            setOriginalName(refVal_originalName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_path;
            ok &= ModelBase::fromJson(fieldValue, refVal_path);
            setPath(refVal_path);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updatedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updatedAt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_updatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updatedAt);
            setUpdatedAt(refVal_updatedAt);
        }
    }
    return ok;
}

void Attachment::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_EncodingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("encoding"), m_Encoding));
    }
    if(m_FileNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fileName"), m_FileName));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_LogIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("logId"), m_LogId));
    }
    if(m_MimeTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mimeType"), m_MimeType));
    }
    if(m_OriginalNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("originalName"), m_OriginalName));
    }
    if(m_PathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("path"), m_Path));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_UpdatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
    }
}

bool Attachment::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        int64_t refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("encoding")))
    {
        utility::string_t refVal_encoding;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("encoding")), refVal_encoding );
        setEncoding(refVal_encoding);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fileName")))
    {
        utility::string_t refVal_fileName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fileName")), refVal_fileName );
        setFileName(refVal_fileName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        int64_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("logId")))
    {
        int64_t refVal_logId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("logId")), refVal_logId );
        setLogId(refVal_logId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mimeType")))
    {
        utility::string_t refVal_mimeType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mimeType")), refVal_mimeType );
        setMimeType(refVal_mimeType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("originalName")))
    {
        utility::string_t refVal_originalName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("originalName")), refVal_originalName );
        setOriginalName(refVal_originalName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("path")))
    {
        utility::string_t refVal_path;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("path")), refVal_path );
        setPath(refVal_path);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        int32_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updatedAt")))
    {
        int64_t refVal_updatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt")), refVal_updatedAt );
        setUpdatedAt(refVal_updatedAt);
    }
    return ok;
}

int64_t Attachment::getCreatedAt() const
{
    return m_CreatedAt;
}

void Attachment::setCreatedAt(int64_t value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Attachment::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Attachment::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t Attachment::getEncoding() const
{
    return m_Encoding;
}

void Attachment::setEncoding(const utility::string_t& value)
{
    m_Encoding = value;
    m_EncodingIsSet = true;
}

bool Attachment::encodingIsSet() const
{
    return m_EncodingIsSet;
}

void Attachment::unsetEncoding()
{
    m_EncodingIsSet = false;
}
utility::string_t Attachment::getFileName() const
{
    return m_FileName;
}

void Attachment::setFileName(const utility::string_t& value)
{
    m_FileName = value;
    m_FileNameIsSet = true;
}

bool Attachment::fileNameIsSet() const
{
    return m_FileNameIsSet;
}

void Attachment::unsetFileName()
{
    m_FileNameIsSet = false;
}
int64_t Attachment::getId() const
{
    return m_Id;
}

void Attachment::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Attachment::idIsSet() const
{
    return m_IdIsSet;
}

void Attachment::unsetId()
{
    m_IdIsSet = false;
}
int64_t Attachment::getLogId() const
{
    return m_LogId;
}

void Attachment::setLogId(int64_t value)
{
    m_LogId = value;
    m_LogIdIsSet = true;
}

bool Attachment::logIdIsSet() const
{
    return m_LogIdIsSet;
}

void Attachment::unsetLogId()
{
    m_LogIdIsSet = false;
}
utility::string_t Attachment::getMimeType() const
{
    return m_MimeType;
}

void Attachment::setMimeType(const utility::string_t& value)
{
    m_MimeType = value;
    m_MimeTypeIsSet = true;
}

bool Attachment::mimeTypeIsSet() const
{
    return m_MimeTypeIsSet;
}

void Attachment::unsetMimeType()
{
    m_MimeTypeIsSet = false;
}
utility::string_t Attachment::getOriginalName() const
{
    return m_OriginalName;
}

void Attachment::setOriginalName(const utility::string_t& value)
{
    m_OriginalName = value;
    m_OriginalNameIsSet = true;
}

bool Attachment::originalNameIsSet() const
{
    return m_OriginalNameIsSet;
}

void Attachment::unsetOriginalName()
{
    m_OriginalNameIsSet = false;
}
utility::string_t Attachment::getPath() const
{
    return m_Path;
}

void Attachment::setPath(const utility::string_t& value)
{
    m_Path = value;
    m_PathIsSet = true;
}

bool Attachment::pathIsSet() const
{
    return m_PathIsSet;
}

void Attachment::unsetPath()
{
    m_PathIsSet = false;
}
int32_t Attachment::getSize() const
{
    return m_Size;
}

void Attachment::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool Attachment::sizeIsSet() const
{
    return m_SizeIsSet;
}

void Attachment::unsetSize()
{
    m_SizeIsSet = false;
}
int64_t Attachment::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void Attachment::setUpdatedAt(int64_t value)
{
    m_UpdatedAt = value;
    m_UpdatedAtIsSet = true;
}

bool Attachment::updatedAtIsSet() const
{
    return m_UpdatedAtIsSet;
}

void Attachment::unsetUpdatedAt()
{
    m_UpdatedAtIsSet = false;
}
}
}
}
}


