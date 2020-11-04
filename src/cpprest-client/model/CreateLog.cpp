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



#include "CreateLog.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CreateLog::CreateLog()
{
    m_AttachmentsIsSet = false;
    m_ParentLogId = 0L;
    m_ParentLogIdIsSet = false;
    m_RunNumbersIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
}

CreateLog::~CreateLog()
{
}

void CreateLog::validate()
{
    // TODO: implement validation
}

web::json::value CreateLog::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AttachmentsIsSet)
    {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(m_Attachments);
    }
    if(m_ParentLogIdIsSet)
    {
        val[utility::conversions::to_string_t("parentLogId")] = ModelBase::toJson(m_ParentLogId);
    }
    if(m_RunNumbersIsSet)
    {
        val[utility::conversions::to_string_t("runNumbers")] = ModelBase::toJson(m_RunNumbers);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }

    return val;
}

bool CreateLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachments")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Attachment>> refVal_attachments;
            ok &= ModelBase::fromJson(fieldValue, refVal_attachments);
            setAttachments(refVal_attachments);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentLogId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentLogId"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_parentLogId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentLogId);
            setParentLogId(refVal_parentLogId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runNumbers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runNumbers"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal_runNumbers;
            ok &= ModelBase::fromJson(fieldValue, refVal_runNumbers);
            setRunNumbers(refVal_runNumbers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_text;
            ok &= ModelBase::fromJson(fieldValue, refVal_text);
            setText(refVal_text);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    return ok;
}

void CreateLog::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AttachmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), m_Attachments));
    }
    if(m_ParentLogIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentLogId"), m_ParentLogId));
    }
    if(m_RunNumbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runNumbers"), m_RunNumbers));
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
}

bool CreateLog::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("attachments")))
    {
        std::vector<std::shared_ptr<Attachment>> refVal_attachments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments")), refVal_attachments );
        setAttachments(refVal_attachments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentLogId")))
    {
        int64_t refVal_parentLogId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentLogId")), refVal_parentLogId );
        setParentLogId(refVal_parentLogId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("runNumbers")))
    {
        std::vector<int64_t> refVal_runNumbers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("runNumbers")), refVal_runNumbers );
        setRunNumbers(refVal_runNumbers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        utility::string_t refVal_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("text")), refVal_text );
        setText(refVal_text);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    return ok;
}

std::vector<std::shared_ptr<Attachment>>& CreateLog::getAttachments()
{
    return m_Attachments;
}

void CreateLog::setAttachments(const std::vector<std::shared_ptr<Attachment>>& value)
{
    m_Attachments = value;
    m_AttachmentsIsSet = true;
}

bool CreateLog::attachmentsIsSet() const
{
    return m_AttachmentsIsSet;
}

void CreateLog::unsetAttachments()
{
    m_AttachmentsIsSet = false;
}
int64_t CreateLog::getParentLogId() const
{
    return m_ParentLogId;
}

void CreateLog::setParentLogId(int64_t value)
{
    m_ParentLogId = value;
    m_ParentLogIdIsSet = true;
}

bool CreateLog::parentLogIdIsSet() const
{
    return m_ParentLogIdIsSet;
}

void CreateLog::unsetParentLogId()
{
    m_ParentLogIdIsSet = false;
}
std::vector<int64_t>& CreateLog::getRunNumbers()
{
    return m_RunNumbers;
}

void CreateLog::setRunNumbers(std::vector<int64_t> value)
{
    m_RunNumbers = value;
    m_RunNumbersIsSet = true;
}

bool CreateLog::runNumbersIsSet() const
{
    return m_RunNumbersIsSet;
}

void CreateLog::unsetRunNumbers()
{
    m_RunNumbersIsSet = false;
}
utility::string_t CreateLog::getText() const
{
    return m_Text;
}

void CreateLog::setText(const utility::string_t& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool CreateLog::textIsSet() const
{
    return m_TextIsSet;
}

void CreateLog::unsetText()
{
    m_TextIsSet = false;
}
utility::string_t CreateLog::getTitle() const
{
    return m_Title;
}

void CreateLog::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool CreateLog::titleIsSet() const
{
    return m_TitleIsSet;
}

void CreateLog::unsetTitle()
{
    m_TitleIsSet = false;
}
}
}
}
}


