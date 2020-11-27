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



#include "UpdateFlp.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UpdateFlp::UpdateFlp()
{
    m_NTimeframes = 0;
    m_NTimeframesIsSet = false;
    m_BytesProcessed = 0;
    m_BytesProcessedIsSet = false;
    m_BytesEquipmentReadOut = 0;
    m_BytesEquipmentReadOutIsSet = false;
    m_BytesRecordingReadOut = 0;
    m_BytesRecordingReadOutIsSet = false;
    m_BytesFairMQReadOut = 0;
    m_BytesFairMQReadOutIsSet = false;
}

UpdateFlp::~UpdateFlp()
{
}

void UpdateFlp::validate()
{
    // TODO: implement validation
}

web::json::value UpdateFlp::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NTimeframesIsSet)
    {
        val[utility::conversions::to_string_t("nTimeframes")] = ModelBase::toJson(m_NTimeframes);
    }
    if(m_BytesProcessedIsSet)
    {
        val[utility::conversions::to_string_t("bytesProcessed")] = ModelBase::toJson(m_BytesProcessed);
    }
    if(m_BytesEquipmentReadOutIsSet)
    {
        val[utility::conversions::to_string_t("bytesEquipmentReadOut")] = ModelBase::toJson(m_BytesEquipmentReadOut);
    }
    if(m_BytesRecordingReadOutIsSet)
    {
        val[utility::conversions::to_string_t("bytesRecordingReadOut")] = ModelBase::toJson(m_BytesRecordingReadOut);
    }
    if(m_BytesFairMQReadOutIsSet)
    {
        val[utility::conversions::to_string_t("bytesFairMQReadOut")] = ModelBase::toJson(m_BytesFairMQReadOut);
    }

    return val;
}

bool UpdateFlp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nTimeframes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nTimeframes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_nTimeframes;
            ok &= ModelBase::fromJson(fieldValue, refVal_nTimeframes);
            setNTimeframes(refVal_nTimeframes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesProcessed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytesProcessed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_bytesProcessed;
            ok &= ModelBase::fromJson(fieldValue, refVal_bytesProcessed);
            setBytesProcessed(refVal_bytesProcessed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesEquipmentReadOut")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytesEquipmentReadOut"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_bytesEquipmentReadOut;
            ok &= ModelBase::fromJson(fieldValue, refVal_bytesEquipmentReadOut);
            setBytesEquipmentReadOut(refVal_bytesEquipmentReadOut);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesRecordingReadOut")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytesRecordingReadOut"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_bytesRecordingReadOut;
            ok &= ModelBase::fromJson(fieldValue, refVal_bytesRecordingReadOut);
            setBytesRecordingReadOut(refVal_bytesRecordingReadOut);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesFairMQReadOut")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytesFairMQReadOut"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_bytesFairMQReadOut;
            ok &= ModelBase::fromJson(fieldValue, refVal_bytesFairMQReadOut);
            setBytesFairMQReadOut(refVal_bytesFairMQReadOut);
        }
    }
    return ok;
}

void UpdateFlp::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NTimeframesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nTimeframes"), m_NTimeframes));
    }
    if(m_BytesProcessedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesProcessed"), m_BytesProcessed));
    }
    if(m_BytesEquipmentReadOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesEquipmentReadOut"), m_BytesEquipmentReadOut));
    }
    if(m_BytesRecordingReadOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesRecordingReadOut"), m_BytesRecordingReadOut));
    }
    if(m_BytesFairMQReadOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesFairMQReadOut"), m_BytesFairMQReadOut));
    }
}

bool UpdateFlp::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("nTimeframes")))
    {
        int32_t refVal_nTimeframes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nTimeframes")), refVal_nTimeframes );
        setNTimeframes(refVal_nTimeframes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesProcessed")))
    {
        int32_t refVal_bytesProcessed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesProcessed")), refVal_bytesProcessed );
        setBytesProcessed(refVal_bytesProcessed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesEquipmentReadOut")))
    {
        int32_t refVal_bytesEquipmentReadOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesEquipmentReadOut")), refVal_bytesEquipmentReadOut );
        setBytesEquipmentReadOut(refVal_bytesEquipmentReadOut);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesRecordingReadOut")))
    {
        int32_t refVal_bytesRecordingReadOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesRecordingReadOut")), refVal_bytesRecordingReadOut );
        setBytesRecordingReadOut(refVal_bytesRecordingReadOut);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesFairMQReadOut")))
    {
        int32_t refVal_bytesFairMQReadOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesFairMQReadOut")), refVal_bytesFairMQReadOut );
        setBytesFairMQReadOut(refVal_bytesFairMQReadOut);
    }
    return ok;
}

int32_t UpdateFlp::getNTimeframes() const
{
    return m_NTimeframes;
}

void UpdateFlp::setNTimeframes(int32_t value)
{
    m_NTimeframes = value;
    m_NTimeframesIsSet = true;
}

bool UpdateFlp::nTimeframesIsSet() const
{
    return m_NTimeframesIsSet;
}

void UpdateFlp::unsetNTimeframes()
{
    m_NTimeframesIsSet = false;
}
int32_t UpdateFlp::getBytesProcessed() const
{
    return m_BytesProcessed;
}

void UpdateFlp::setBytesProcessed(int32_t value)
{
    m_BytesProcessed = value;
    m_BytesProcessedIsSet = true;
}

bool UpdateFlp::bytesProcessedIsSet() const
{
    return m_BytesProcessedIsSet;
}

void UpdateFlp::unsetBytesProcessed()
{
    m_BytesProcessedIsSet = false;
}
int32_t UpdateFlp::getBytesEquipmentReadOut() const
{
    return m_BytesEquipmentReadOut;
}

void UpdateFlp::setBytesEquipmentReadOut(int32_t value)
{
    m_BytesEquipmentReadOut = value;
    m_BytesEquipmentReadOutIsSet = true;
}

bool UpdateFlp::bytesEquipmentReadOutIsSet() const
{
    return m_BytesEquipmentReadOutIsSet;
}

void UpdateFlp::unsetBytesEquipmentReadOut()
{
    m_BytesEquipmentReadOutIsSet = false;
}
int32_t UpdateFlp::getBytesRecordingReadOut() const
{
    return m_BytesRecordingReadOut;
}

void UpdateFlp::setBytesRecordingReadOut(int32_t value)
{
    m_BytesRecordingReadOut = value;
    m_BytesRecordingReadOutIsSet = true;
}

bool UpdateFlp::bytesRecordingReadOutIsSet() const
{
    return m_BytesRecordingReadOutIsSet;
}

void UpdateFlp::unsetBytesRecordingReadOut()
{
    m_BytesRecordingReadOutIsSet = false;
}
int32_t UpdateFlp::getBytesFairMQReadOut() const
{
    return m_BytesFairMQReadOut;
}

void UpdateFlp::setBytesFairMQReadOut(int32_t value)
{
    m_BytesFairMQReadOut = value;
    m_BytesFairMQReadOutIsSet = true;
}

bool UpdateFlp::bytesFairMQReadOutIsSet() const
{
    return m_BytesFairMQReadOutIsSet;
}

void UpdateFlp::unsetBytesFairMQReadOut()
{
    m_BytesFairMQReadOutIsSet = false;
}
}
}
}
}


